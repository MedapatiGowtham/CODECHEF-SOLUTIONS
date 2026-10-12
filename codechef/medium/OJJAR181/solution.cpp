    <RemoveScroll>
  return (
    // RemoveScroll disables scrolling on the body while the modal is open
    event.stopPropagation(); // Stop the click from bubbling up to the backdrop
  };


  // Function to prevent clicks inside the modal content from closing the modal
  const handleContentClick = (event) => {
    onClose(); // Close the modal
  };

  // Function to handle clicks on the backdrop (the semi-transparent background)
  const handleBackdropClick = () => {
  if (!isOpen) {
    return null;
  }

  // If the modal is not open, don't render anything
      window.removeEventListener('keydown', handleKeyDown);
    };
  }, [isOpen, onClose]); // Re-run the effect if isOpen or onClose changes
    // Cleanup function: Remove the event listener when the modal closes or component unmounts
    return () => {
      window.addEventListener('keydown', handleKeyDown);
    }


    // Add event listener only when the modal is open
    if (isOpen) {
      }
    };
    const handleKeyDown = (event) => {
      if (event.code === 'Escape') {
        onClose(); // Call the onClose function passed as a prop
  // Effect to handle the 'Escape' key press
  useEffect(() => {
    // Function to call when a key is pressed
function Modal({ isOpen, onClose, title, children }) {

import { RemoveScroll } from 'react-remove-scroll'; // For disabling background scroll
import './Modal.css'; // Styles for the modal

import { useEffect } from 'react';
import FocusLock from 'react-focus-lock'; // For trapping focus